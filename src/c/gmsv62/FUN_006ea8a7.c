/* FUN_006ea8a7 - 0x006ea8a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006ea8a7(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_007b4029(iVar2);
    (**(code **)(**(int **)(param_1 + 0xa74) + 0x24))(iVar2,iVar1 != 0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  return;
}


