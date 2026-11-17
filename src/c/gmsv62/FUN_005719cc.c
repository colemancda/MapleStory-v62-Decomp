/* FUN_005719cc - 0x005719cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005719cc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00572c41(iVar1,*(undefined4 *)(param_1 + 0x68 + (iVar1 + *(int *)(param_1 + 0xf8) * 3) * 4))
    ;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


