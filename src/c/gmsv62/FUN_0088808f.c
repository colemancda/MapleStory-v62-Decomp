/* FUN_0088808f - 0x0088808f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0088808f(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_0098091c);
  DAT_00980918 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_00980920);
  DAT_00980910 = (uint)(sVar1 == 3);
  DAT_0098090c = 0;
  if (DAT_00980918 == 0) {
    DAT_00980914 = FUN_00888740(DAT_0098091c);
  }
  else {
    DAT_00980914 = 2;
  }
  EnumSystemLocalesA(FUN_00888116,1);
  if ((((DAT_00980924 & 0x100) == 0) || ((DAT_00980924 & 0x200) == 0)) || ((DAT_00980924 & 7) == 0))
  {
    DAT_00980924 = 0;
  }
  return;
}


