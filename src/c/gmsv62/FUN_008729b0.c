/* FUN_008729b0 - 0x008729b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_008729b0(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar1[1] != DAT_0097fca4) {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (*param_2 < (uint)puVar2[3]) {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (puVar3 != DAT_0097fca4);
  }
  return puVar1;
}


