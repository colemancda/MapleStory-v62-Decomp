/* FUN_0086aa40 - 0x0086aa40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0086aa40(void)

{
  int iVar1;
  undefined1 uVar2;
  
  if (DAT_0097fc64 == 0) {
    return 0;
  }
  uVar2 = FUN_0086d6f0();
  iVar1 = DAT_0097fc64;
  if (DAT_0097fc64 != 0) {
    FUN_0086aa90();
    FUN_00402614(iVar1);
  }
  DAT_0097fc64 = 0;
  return uVar2;
}


