/* FUN_005e4955 - 0x005e4955 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e4955(undefined1 param_1)

{
  undefined1 *_Dst;
  
  _Dst = (undefined1 *)FUN_005e5129();
  _memset(_Dst,0,0x14);
  *_Dst = 10;
  _Dst[0x12] = param_1;
  return;
}


