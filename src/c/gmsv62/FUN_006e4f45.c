/* FUN_006e4f45 - 0x006e4f45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006e4f45(int param_1)

{
  undefined4 *puVar1;
  int iStack_10;
  int iStack_c;
  
  puVar1 = (undefined4 *)(param_1 + 0xab0);
  iStack_c = 3;
  do {
    *puVar1 = 1;
    puVar1 = puVar1 + 2;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  if (*(int *)(*(int *)(param_1 + 0xa74) + 0x34) != 9) {
    iStack_10 = iStack_c;
    FUN_006ea6f0(&iStack_10);
    FUN_006e968b();
  }
  iStack_c = 0x6e4f88;
  FUN_006ea8a7();
  return;
}


