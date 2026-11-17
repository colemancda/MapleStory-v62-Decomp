/* FUN_00886a09 - 0x00886a09 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00886a09(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short local_2c;
  char local_2a;
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  FUN_00886a65(&local_10,&param_1);
  iVar3 = FUN_0088a5b9(local_10,uStack_c,uStack_8,0x11,0,&local_2c);
  iVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_0087b200(param_4,local_28);
  piVar1[3] = iVar2;
  return piVar1;
}


