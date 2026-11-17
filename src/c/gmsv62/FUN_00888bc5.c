/* FUN_00888bc5 - 0x00888bc5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00888bc5(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_00980fe0) &&
     ((*(byte *)((&DAT_00980ee0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00980ee0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_0087fc84();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_0087fc8d();
  *puVar1 = 0;
  return 0xffffffff;
}


