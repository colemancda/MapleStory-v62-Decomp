/* FUN_00879711 - 0x00879711 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00879711(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_0087d9ec(0x1b);
  if (param_1[1] != 0) {
    FUN_0087aa78(param_1[1]);
  }
  FUN_0087da4d(0x1b);
  return;
}


