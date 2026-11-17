/* FUN_005a05f1 - 0x005a05f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005a05f1(short *param_1,char param_2)

{
  undefined1 local_14 [16];
  
  if (param_1 != (short *)0x0) {
    do {
      if (*param_1 != 0x400c) break;
      param_1 = *(short **)(param_1 + 4);
    } while (param_1 != (short *)0x0);
    if (param_1 != (short *)0x0) {
      return;
    }
  }
  if (param_2 == '\0') {
    return;
  }
  FUN_00403880(0x80004003,0,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_008f7618);
}


