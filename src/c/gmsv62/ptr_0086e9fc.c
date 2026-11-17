/* ptr_0086e9fc - 0x0086e9fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0086e9fc(void)

{
  undefined4 unaff_ESI;
  
  DAT_0097fb20 = FUN_0086f770(unaff_ESI);
  if (DAT_0097fb20 == 0) {
    return 0;
  }
  FUN_00875080();
  DAT_0097fb1c = FUN_0086f770(unaff_ESI);
  if (DAT_0097fb1c == 0) {
    return 0;
  }
  FUN_00875080();
  DAT_0097f7fc = FUN_0086f770(unaff_ESI);
  if (DAT_0097f7fc == 0) {
    return 0;
  }
  DAT_0097fc6c = 1;
  return 1;
}


