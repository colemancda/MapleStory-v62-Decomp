/* FUN_508047c6 - 0x508047c6 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508047c6(void)

{
  DAT_5081eb94 = FUN_50803b07();
  if (DAT_5081eb94 == (uint *)0x0) {
    DAT_5081eb94 = (uint *)0x0;
  }
  else {
    *DAT_5081eb94 = (uint)&PTR_LAB_50817760;
    DAT_5081eb94[1] = (uint)DAT_5081e9dc;
    DAT_5081e9dc = DAT_5081eb94;
    DAT_5081eb94[2] = 0;
    DAT_5081eb94[3] = 0;
    DAT_5081eb94[5] = 0;
    *DAT_5081eb94 = (uint)&PTR_FUN_5081775c;
  }
  return;
}


