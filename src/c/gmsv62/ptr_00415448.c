/* ptr_00415448 - 0x00415448 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_00415448(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 uStack00000004;
  
  puVar3 = *(undefined4 **)(*(int *)(unaff_ESI + 4) + param_2 * 4);
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[2] == *unaff_EDI) {
      *(undefined4 *)(*(int *)(unaff_ESI + 4) + param_2 * 4) = puVar3[1];
LAB_00415480:
      if (puVar3 != (undefined4 *)0x0) {
        uStack00000004 = 1;
        (**(code **)*puVar3)();
      }
      *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + -1;
      return 1;
    }
    puVar1 = (undefined4 *)puVar3[1];
    puVar2 = puVar3;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      if (puVar3[2] == *unaff_EDI) {
        puVar2[1] = puVar3[1];
        goto LAB_00415480;
      }
      puVar2 = puVar3;
      puVar1 = (undefined4 *)puVar3[1];
    }
  }
  return 0;
}


