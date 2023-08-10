import React from 'react';
import Expenses from './components/Expenses/Expenses';
import NewExpense from './components/NewExpense/NewExpense';

const App = () => {
  let expenses = [
    {
      id: 'e1',
      title: 'School fee',
      amount: 250,
      date: new Date(2021, 5, 2)
    },
    {
      id: 'e2',
      title: 'Books',
      amount: 230,
      date: new Date(2021, 3, 22)
    },
    {
      id: 'e3',
      title: 'House rent',
      amount: 550,
      date: new Date(2021, 6, 18)
    },
    {
      id: 'e4',
      title: 'Food',
      amount: 250,
      date: new Date(2021, 5, 20)
    },
  ];
  
  return (
    <div>
      <NewExpense />
      <Expenses items={expenses} />
    </div>
  );
}

export default App;
