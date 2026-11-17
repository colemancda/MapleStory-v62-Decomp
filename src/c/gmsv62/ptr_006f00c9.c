/* ptr_006f00c9 - 0x006f00c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_006f00c9(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0097bd74 == 0) || (DAT_0097bd74 != param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


