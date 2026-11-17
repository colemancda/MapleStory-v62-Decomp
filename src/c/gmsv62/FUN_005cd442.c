/* FUN_005cd442 - 0x005cd442 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005cd442(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0042452b();
  uVar1 = FUN_0042459a();
  FUN_005ca219(uVar1,0,0,0);
  if (*(int *)(*(int *)(param_1 + 0x15c) + 0x1d8) != 0) {
    FUN_005cfefc(uVar1);
    iVar2 = FUN_0042459a();
    iVar3 = FUN_0042459a();
    FUN_005d019c((iVar2 * 100) / iVar3,0xffff0000);
    FUN_005c4b14();
  }
  return;
}


