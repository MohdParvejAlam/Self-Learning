import React from "react";
import './NewExpense.css';
import ExpenseForm from "./ExpenseForm";

const NewExpense = () => {
    const saveExpenseDataHandler= (enteredExpenseData) =>{
      console.log(enteredExpenseData);
    };
    return(
        <div className="new-expense">
            <form>
             <ExpenseForm onSaveExpenseData = {saveExpenseDataHandler} />
            </form>
        </div>
    );
}

export default NewExpense;