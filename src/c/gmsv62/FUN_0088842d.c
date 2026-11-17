/* FUN_0088842d - 0x0088842d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0088842d(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00980920);
  DAT_00980910 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_00888464,1);
  if ((DAT_00980924 & 4) == 0) {
    DAT_00980924 = 0;
  }
  return;
}


