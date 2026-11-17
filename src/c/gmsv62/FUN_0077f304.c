/* FUN_0077f304 - 0x0077f304 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0077f304(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x780) = 0;
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x824) + 100 + iVar3) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x824) + iVar3 + 0x7c);
      iVar2 = FUN_00772cb9();
      *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) + iVar2 + (1 - (iVar1 * 0x14 + -0x14));
    }
    iVar3 = iVar3 + 0x7c;
  } while (iVar3 < 0xf8);
  return;
}


