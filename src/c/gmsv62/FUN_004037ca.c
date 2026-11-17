/* FUN_004037ca - 0x004037ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004037ca(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = puVar4 + *(int *)(param_1 + 8);
    while (puVar4 < puVar1) {
      puVar2 = (undefined4 *)*puVar4;
      puVar4 = puVar4 + 1;
      while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar3[1];
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
    }
    FUN_00402b41(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


