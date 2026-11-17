/* FUN_008802df - 0x008802df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_008802df(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00982240;
  while( true ) {
    if (DAT_00982240 + DAT_0098223c * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


