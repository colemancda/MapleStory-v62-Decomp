/* FUN_0070200f - 0x0070200f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070200f(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x54) == 0) {
    if (*(int *)(extraout_ECX + 0x50) == 0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        if (*(int *)(extraout_ECX + 0x574) == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 0;
        }
        FUN_00498f74(uVar3);
        iVar2 = **(int **)(extraout_ECX + 0x20);
        uVar3 = 0;
      }
      else {
        if (*(int *)(extraout_ECX + 0x574) == 0) {
          FUN_00498f74(2);
        }
        else {
          FUN_00498f74(3);
          puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x5a8);
          uVar3 = *puVar1;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_007d3cdd(uVar3);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
        }
        iVar2 = **(int **)(extraout_ECX + 0x20);
        uVar3 = 1;
      }
      (**(code **)(iVar2 + 0x1c))(*(undefined4 *)(extraout_ECX + 0x10),0x65,uVar3);
    }
    else {
      if (*(int *)(unaff_EBP + 8) == 0) {
        if (*(int *)(extraout_ECX + 0x574) == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 1;
      }
      FUN_00498f74(uVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


