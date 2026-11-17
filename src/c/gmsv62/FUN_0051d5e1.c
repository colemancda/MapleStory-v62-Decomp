/* FUN_0051d5e1 - 0x0051d5e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0051d5e1(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00455c59(local_10);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  if (local_c != 0) {
    FUN_0045e7c2(0);
  }
  local_8 = 0;
  uVar2 = FUN_00650dae(uVar2,ptr_004f5c6a,&local_8);
  FUN_007a71f1(local_8,uVar2,0,0,0,0,param_1);
  return;
}


