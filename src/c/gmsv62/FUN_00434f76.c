/* FUN_00434f76 - 0x00434f76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00434f76(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  ushort *puVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(extraout_ECX + 8);
  }
  else {
    if (*(uint *)(extraout_ECX + 0xc) <= *(uint *)(extraout_ECX + 0x14)) goto LAB_00434fb3;
    iVar4 = *(int *)(extraout_ECX + 8) * 2 + 1;
  }
  if (iVar4 != 0) {
    FUN_00438904(iVar4,0);
  }
LAB_00434fb3:
  puVar7 = (ushort *)**(undefined4 **)(unaff_EBP + 8);
  uVar5 = 0;
  if (puVar7 != (ushort *)0x0) {
    for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
      uVar5 = uVar5 * 0x20 + 1 + (uint)*puVar7;
    }
  }
  uVar5 = uVar5 % *(uint *)(extraout_ECX + 8);
  puVar6 = *(undefined4 **)(*(int *)(extraout_ECX + 4) + uVar5 * 4);
  puVar1 = (undefined4 *)(*(int *)(extraout_ECX + 4) + uVar5 * 4);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
      puVar6 = (undefined4 *)FUN_0043921b();
      *(undefined4 **)(unaff_EBP + -0x18) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00402e8e(**(undefined4 **)(unaff_EBP + 8));
        uVar2 = *puVar1;
        *puVar6 = &PTR_LAB_008e8af4;
        puVar6[1] = uVar2;
        puVar6[2] = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x10) + 8));
        }
        *puVar6 = &PTR_FUN_008e8af0;
      }
      if (((*(byte *)(unaff_EBP + -0x14) & 1) != 0) && (*(int *)(unaff_EBP + -0x10) != 0)) {
        FUN_004030b1();
      }
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        puVar6[3] = **(undefined4 **)(unaff_EBP + 0xc);
      }
      *puVar1 = puVar6;
LAB_0043508b:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar6;
    }
    cVar3 = FUN_00434f2c(**(undefined4 **)(unaff_EBP + 8));
    if (cVar3 != '\0') {
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        puVar6[3] = **(undefined4 **)(unaff_EBP + 0xc);
      }
      goto LAB_0043508b;
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


