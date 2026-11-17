/* FUN_004229b8 - 0x004229b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004229b8(byte *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *param_3 = 0x10;
  FUN_00420cd2(param_1 + 0x24,param_1);
  if (iVar1 != 0) {
    param_2 = param_2 - (int)param_1;
    iVar2 = iVar1;
    do {
      param_1[param_2] = param_1[0x10] ^ *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_3 = iVar1;
  return 1;
}


