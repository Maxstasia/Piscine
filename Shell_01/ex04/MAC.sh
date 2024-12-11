#!/bin/bash
ifconfig -a | grep ether | cut -b 15-31
