/* FUN_0077f351 - 0x0077f351 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0077f351(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x780) = 0;
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x828) + 0x60 + iVar3) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x828) + iVar3 + 0x78);
      iVar2 = FUN_00776a05();
      *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) + iVar2 + (1 - (iVar1 * 5 + -5));
    }
    iVar3 = iVar3 + 0x80;
  } while (iVar3 < 0x280);
  return;
}


