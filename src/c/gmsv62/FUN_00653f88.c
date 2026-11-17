/* FUN_00653f88 - 0x00653f88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00653f88(int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  pcVar1 = (code *)*param_1;
  if ((int)pcVar1 < 0x4dfcdf) {
    if (pcVar1 != ptr_004dfcda) {
      if (pcVar1 == (code *)0x4c4f29) {
        if (param_2 == 0x27) {
          return 1;
        }
        if (param_2 == 0x30) {
          return 1;
        }
        bVar2 = param_2 == 0x31;
        goto LAB_00653fbe;
      }
      if (((int)pcVar1 < 0x4dd5ca) || ((0x4dd5cc < (int)pcVar1 && (pcVar1 != ptr_004dfcda))))
      goto LAB_00653fb4;
    }
  }
  else if (((int)pcVar1 < 0x4e23e9) ||
          ((0x4e23ea < (int)pcVar1 &&
           (((int)pcVar1 < 0x4e23ec || ((0x4e23ed < (int)pcVar1 && (pcVar1 != (code *)0x4e23ef))))))
          )) {
LAB_00653fb4:
    if (param_1[5] == 0) {
      return 1;
    }
    bVar2 = param_2 == param_1[5];
    goto LAB_00653fbe;
  }
  if (param_2 == 0x27) {
    return 1;
  }
  bVar2 = param_2 == 0x30;
LAB_00653fbe:
  if (bVar2) {
    return 1;
  }
  return 0;
}


