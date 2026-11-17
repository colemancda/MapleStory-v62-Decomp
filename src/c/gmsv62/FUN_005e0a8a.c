/* FUN_005e0a8a - 0x005e0a8a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005e0a8a(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char cVar7;
  int extraout_ECX;
  char *pcVar8;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 4) == 0) {
    iVar5 = *(int *)(extraout_ECX + 8);
  }
  else {
    if (*(uint *)(extraout_ECX + 0xc) <= *(uint *)(extraout_ECX + 0x14)) goto LAB_005e0ac2;
    iVar5 = *(int *)(extraout_ECX + 8) * 2 + 1;
  }
  if (iVar5 != 0) {
    FUN_005e1e43(iVar5,0);
  }
LAB_005e0ac2:
  pcVar8 = (char *)**(undefined4 **)(unaff_EBP + 8);
  uVar4 = 0;
  if (pcVar8 != (char *)0x0) {
    cVar7 = *pcVar8;
    while (cVar7 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar4 = uVar4 * 0x20 + 1 + (int)cVar7;
      cVar7 = *pcVar8;
    }
  }
  uVar4 = uVar4 % *(uint *)(extraout_ECX + 8);
  puVar6 = *(undefined4 **)(*(int *)(extraout_ECX + 4) + uVar4 * 4);
  puVar1 = (undefined4 *)(*(int *)(extraout_ECX + 4) + uVar4 * 4);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
      puVar6 = (undefined4 *)FUN_005e207f();
      *(undefined4 **)(unaff_EBP + -0x10) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar2 = *puVar1;
        *puVar6 = &PTR_LAB_008ecc08;
        uVar3 = *(undefined4 *)(unaff_EBP + 8);
        puVar6[1] = uVar2;
        puVar6[2] = 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414f8b(uVar3);
        *puVar6 = &PTR_FUN_008ecc04;
      }
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        puVar6[3] = **(undefined4 **)(unaff_EBP + 0xc);
      }
      *puVar1 = puVar6;
LAB_005e0b6c:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar6;
    }
    iVar5 = FUN_0045ec92(*(undefined4 *)(unaff_EBP + 8));
    if (iVar5 != 0) {
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        puVar6[3] = **(undefined4 **)(unaff_EBP + 0xc);
      }
      goto LAB_005e0b6c;
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


