/* FUN_00449668 - 0x00449668 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00449668(int param_1)

{
  undefined1 local_10 [8];
  int local_8;
  
  if ((param_1 == 0x205) && (DAT_00978368 != 0)) {
    FUN_00817e25(local_10,0);
    FUN_006851fe(local_10,&local_8,&param_1);
    if (local_8 == 1) {
      FUN_00834d98(-param_1);
    }
    else if ((local_8 == 2) && (param_1 != 0x14011e)) {
      FUN_007bd2b0(param_1);
    }
  }
  return;
}


