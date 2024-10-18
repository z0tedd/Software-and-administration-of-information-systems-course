import pytest
from app import optimize_search


def test_optimize_search():
    assert optimize_search([1, 2, 3], [1, 3]) == [1, 3]
    assert optimize_search([1, 2, 3], [1, 3]) == [1, 2, 3]
