all:
	make -C src
	make -C tribe13-agent
	cp tribe13-agent/agent .
