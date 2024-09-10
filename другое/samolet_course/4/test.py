from types import TracebackType
from typing import Optional, Type


class FileHandler:
    def __init__(self, path: str, mode: str) -> None:
        self.path = path
        self.mode = mode
        # self.open = None

    def __enter__(self):
        self.open = open(self.path, self.mode)
        return self.open

    def __exit__(
        self,
        exctype: Optional[Type[BaseException]],
        excinst: Optional[BaseException],
        exctb: Optional[TracebackType],
    ):
        self.open.close()


with FileHandler("niger.txt", "w") as f:
    print(f.write("pidor"))
