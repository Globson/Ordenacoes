all:
	gcc quicksort.c -o EXEC_QUICK

insertion:
	gcc insertion.c -o EXEC_INSERTION

shellsort:
	gcc shellsort.c -o EXEC_SHELL

selection:
	gcc selection.c -o EXEC_SELECTION

bubble:
	gcc bubble.c -o EXEC_BUBBLE

bubble_better:
	gcc bubble_better.c -o EXEC_BUBBLE_BETTER

run:
	./EXEC_QUICK

run_insertion:
	./EXEC_INSERTION

run_selection:
	./EXEC_SELECTION

run_shell:
	./EXEC_SHELL

run_bubble:
	./EXEC_BUBBLE

run_bubble_better:
	./EXEC_BUBBLE_BETTER

rm:
	rm EXEC_QUICK && rm EXEC_SHELL && rm EXEC_BUBBLE && rm EXEC_INSERTION && rm EXEC_SELECTION && EXEC_BUBBLE_BETTER
