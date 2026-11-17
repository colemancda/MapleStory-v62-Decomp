/* FUN_0087f10e - 0x0087f10e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 * FUN_0087f10e(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_5 != '\0') {
    FUN_0087f3b0(param_1 + (*param_4 == 0x2d),0 < param_2);
  }
  puVar2 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar2 = param_1 + 1;
  }
  puVar1 = puVar2;
  if (0 < param_2) {
    puVar1 = puVar2 + 1;
    *puVar2 = puVar2[1];
    *puVar1 = DAT_00972900;
  }
  puVar2 = (undefined1 *)FUN_0087b200(puVar1 + param_2 + (uint)(param_5 == '\0'),s_e_000_008f4090);
  if (param_3 != 0) {
    *puVar2 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar3 = param_4[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      puVar2[1] = 0x2d;
    }
    if (99 < iVar3) {
      puVar2[2] = puVar2[2] + (char)(iVar3 / 100);
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      puVar2[3] = puVar2[3] + (char)(iVar3 / 10);
      iVar3 = iVar3 % 10;
    }
    puVar2[4] = puVar2[4] + (char)iVar3;
  }
  return param_1;
}


