/* FUN_008326d7 - 0x008326d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008326d7(int param_1)

{
  *(undefined4 *)(param_1 + 0x3114) = 0;
  if (DAT_0097bddc != 0) {
    FUN_00815de9();
    if (DAT_0097bddc != 0) {
      (*(code *)**(undefined4 **)(DAT_0097bddc + 8))(1);
    }
  }
  return;
}


