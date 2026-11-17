/* FUN_005ec821 - 0x005ec821 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x005ec849) */

int * __fastcall FUN_005ec821(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x150);
  (*DAT_0097b508)(piVar1);
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar2 = FUN_00424ee1();
    *piVar1 = iVar2 + *(int *)(param_1 + 0x130);
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_00424f08();
    *(int *)(param_1 + 0x154) = iVar2 + *(int *)(param_1 + 0x134);
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0042fb0a();
    *(int *)(param_1 + 0x158) = iVar2 + *piVar1;
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0042fb34();
    *(int *)(param_1 + 0x15c) = iVar2 + *(int *)(param_1 + 0x154);
  }
  return piVar1;
}


