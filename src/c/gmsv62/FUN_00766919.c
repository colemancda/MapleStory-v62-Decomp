/* FUN_00766919 - 0x00766919 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00766919(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00445a30();
  if (*(int *)(param_1 + 0x688) != 0) {
    puVar1 = (undefined4 *)FUN_0045f1e3(0xffffffff);
    *puVar1 = *(undefined4 *)(param_1 + 0x688);
  }
  if (*(int *)(param_1 + 0x68c) != 0) {
    puVar1 = (undefined4 *)FUN_0045f1e3(0xffffffff);
    *puVar1 = *(undefined4 *)(param_1 + 0x68c);
  }
  if (*(int *)(param_1 + 0x5dc) != 0) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x604) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x604) + -4);
    }
    FUN_004ad003(iVar2 + -2);
  }
  return;
}


