/* FUN_008326be - 0x008326be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008326be(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3114) == 0) {
    uVar1 = FUN_007d1e08();
    *(undefined4 *)(param_1 + 0x3114) = uVar1;
  }
  return;
}


