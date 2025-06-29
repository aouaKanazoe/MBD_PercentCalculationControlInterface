function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["PCCI.c:PCCI_M_"] = {file: "C:\\Users\\LENOVO\\Documents\\Documents_2025\\Matlab_Formation_2025\\FormationMatlabUdemy1\\directional_lightening_system_modeling_1\\PCCI_ert_rtw\\PCCI.c",
	size: 8};
	 this.metricsArray.var["PCCI_U"] = {file: "C:\\Users\\LENOVO\\Documents\\Documents_2025\\Matlab_Formation_2025\\FormationMatlabUdemy1\\directional_lightening_system_modeling_1\\PCCI_ert_rtw\\PCCI.c",
	size: 4};
	 this.metricsArray.var["PCCI_Y"] = {file: "C:\\Users\\LENOVO\\Documents\\Documents_2025\\Matlab_Formation_2025\\FormationMatlabUdemy1\\directional_lightening_system_modeling_1\\PCCI_ert_rtw\\PCCI.c",
	size: 1};
	 this.metricsArray.fcn["PCCI_CalculatePercentFunction"] = {file: "C:\\Users\\LENOVO\\Documents\\Documents_2025\\Matlab_Formation_2025\\FormationMatlabUdemy1\\directional_lightening_system_modeling_1\\PCCI_ert_rtw\\CalculatePercentFunction.c",
	stack: 5,
	stackTotal: 5};
	 this.metricsArray.fcn["PCCI_initialize"] = {file: "C:\\Users\\LENOVO\\Documents\\Documents_2025\\Matlab_Formation_2025\\FormationMatlabUdemy1\\directional_lightening_system_modeling_1\\PCCI_ert_rtw\\PCCI.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["PCCI_step"] = {file: "C:\\Users\\LENOVO\\Documents\\Documents_2025\\Matlab_Formation_2025\\FormationMatlabUdemy1\\directional_lightening_system_modeling_1\\PCCI_ert_rtw\\PCCI.c",
	stack: 0,
	stackTotal: 5};
	 this.metricsArray.fcn["PCCI_terminate"] = {file: "C:\\Users\\LENOVO\\Documents\\Documents_2025\\Matlab_Formation_2025\\FormationMatlabUdemy1\\directional_lightening_system_modeling_1\\PCCI_ert_rtw\\PCCI.c",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'PCCI_metrics\'});">Global Memory: 13(bytes) Maximum Stack: 5(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
