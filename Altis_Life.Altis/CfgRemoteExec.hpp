
class CfgRemoteExec {
    class Functions {
        mode = 1;
        jip = 0;

        /* Client only functions */
		F(life_fnc_visVehInfo,CLIENT)

        /* Server only functions */
		F(life_fnc_vehicleInfoUpdate,SERVER)
    };
};
