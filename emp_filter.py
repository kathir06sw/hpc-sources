import numpy as np
import pandas as pd
df = pd.read_csv('/home/admin/HPC/slurm-demo/emp-data.csv')
new_employees_filter = df["Year of Joining"] > 2010;
new_employees = df[new_employees_filter]
new_employees.to_csv("/home/admin/HPC/slurm-demo/new_employees.csv", header='column_names')
