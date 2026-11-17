/* FUN_0087f225 - 0x0087f225 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 * FUN_0087f225(undefined1 *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = 0x30;
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = 0;
  }
  puVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = 0x2d;
    puVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_0087f3b0(puVar3,1);
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_0087f3b0(puVar3,1);
    *puVar3 = DAT_00972900;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_0087f3b0(puVar3 + 1,param_2);
      _memset(puVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}


