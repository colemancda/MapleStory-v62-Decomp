/* FUN_0088831a - 0x0088831a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0088831a(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_0098091c);
  DAT_00980918 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_00980914 = 2;
  }
  else {
    DAT_00980914 = FUN_00888740(DAT_0098091c);
  }
  EnumSystemLocalesA(FUN_00888370,1);
  if ((DAT_00980924 & 4) == 0) {
    DAT_00980924 = 0;
  }
  return;
}


