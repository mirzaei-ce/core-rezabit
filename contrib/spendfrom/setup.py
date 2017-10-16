from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for rezabit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@rezabitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
