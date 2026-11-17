/* ptr_00717823 - 0x00717823 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00717823(int param_1)

{
  undefined4 uVar1;
  
  if ((((DAT_0097bdec == 0) || (DAT_0097bdec != param_1)) &&
      ((DAT_0097bde8 == 0 || (DAT_0097bde8 != param_1)))) &&
     ((DAT_0097bde4 == 0 || (DAT_0097bde4 != param_1)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


