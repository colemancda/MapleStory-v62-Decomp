/* FUN_00448190 - 0x00448190 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00448190(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((int)param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((int)param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  puVar2 = (undefined4 *)(param_2 + 0x19);
  puVar3 = (undefined4 *)((int)param_1 + 0x19);
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0xdd);
  puVar3 = (undefined4 *)((int)param_1 + 0xdd);
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x1a1) = *(undefined4 *)(param_2 + 0x1a1);
  *(undefined4 *)((int)param_1 + 0x1a5) = *(undefined4 *)(param_2 + 0x1a5);
  *(undefined4 *)((int)param_1 + 0x1a9) = *(undefined4 *)(param_2 + 0x1a9);
  *param_1 = &PTR_FUN_008e8cd8;
  return param_1;
}


