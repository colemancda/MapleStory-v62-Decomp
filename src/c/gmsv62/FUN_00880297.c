/* FUN_00880297 - 0x00880297 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00880297(undefined4 param_1)

{
  DAT_00982240 = HeapAlloc(DAT_00982248,0,0x140);
  if (DAT_00982240 == (LPVOID)0x0) {
    return 0;
  }
  DAT_00982238 = 0;
  DAT_0098223c = 0;
  DAT_00982230 = DAT_00982240;
  DAT_00982244 = param_1;
  DAT_00982228 = 0x10;
  return 1;
}


