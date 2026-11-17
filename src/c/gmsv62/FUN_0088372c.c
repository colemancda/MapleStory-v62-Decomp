/* FUN_0088372c - 0x0088372c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0088372c(char *param_1,undefined1 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 local_8c [136];
  
  if (param_1 == (char *)0x0) {
LAB_008837d2:
    puVar2 = (undefined *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      param_2[1] = 0;
      *param_2 = 0x43;
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_00972990,param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_0097290c,param_1), iVar1 != 0)) {
      iVar1 = FUN_0088386c(local_8c,param_1);
      if ((iVar1 != 0) || (iVar1 = FUN_00887eba(local_8c,&DAT_00980788,local_8c), iVar1 == 0))
      goto LAB_008837d2;
      _DAT_00980790 = (uint)DAT_0098078c;
      FUN_00883938(&DAT_00972990,local_8c);
      if (*param_1 == '\0') {
        param_1 = &DAT_00972990;
      }
      FUN_0087b200(&DAT_0097290c,param_1);
    }
    if (param_3 != (undefined2 *)0x0) {
      FUN_00879c20(param_3,&DAT_00980788,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_00879c20(param_4,&DAT_00980790,4);
    }
    FUN_0087b200(param_2,&DAT_00972990);
    puVar2 = &DAT_00972990;
  }
  return puVar2;
}


