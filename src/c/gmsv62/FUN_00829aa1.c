/* FUN_00829aa1 - 0x00829aa1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00829aa1(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2 * 4);
    FUN_0040294d(-(uint)(iVar1 != 0) & iVar1 - 0x10U);
  }
  FUN_00829a43();
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


