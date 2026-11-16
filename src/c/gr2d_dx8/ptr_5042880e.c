/* ptr_5042880e - 0x5042880e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall ptr_5042880e(undefined8 *param_1)

{
  ulonglong *puVar1;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined8 *unaff_EDI;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_MM5;
  undefined8 uVar8;
  undefined8 in_MM6;
  undefined8 *puVar9;
  
  FUN_5042823b((undefined8 *)(unaff_EBP + -0x40),param_1,unaff_EDI);
  FUN_50427420((undefined8 *)(unaff_EBP + -0x40),unaff_ESI,(undefined8 *)(unaff_EBP + -0x40));
  if (*(undefined4 **)(unaff_EBP + 0x10) == unaff_ESI) {
    puVar9 = *(undefined8 **)(unaff_EBP + 0xc);
  }
  else {
    FastExitMediaState();
    puVar9 = *(undefined8 **)(unaff_EBP + 0x10);
    puVar1 = *(ulonglong **)(unaff_EBP + 8);
    uVar3 = PackedIntToFloatingDwordConv(*puVar9,*puVar9);
    uVar6 = puVar9[2];
    uVar4 = PackedIntToFloatingDwordConv(puVar9[1],puVar9[1]);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar5 = CONCAT44(uVar7,uVar7);
    uVar8 = FloatingReciprocalAprox(in_MM5,uVar4);
    uVar5 = FloatingReciprocalAprox(uVar5,uVar5);
    uVar3 = PackedFloatingSUB(**(undefined8 **)(unaff_EBP + 0xc),uVar3);
    uVar5 = CONCAT44((int)uVar5,(int)uVar8);
    uVar4 = PackedFloatingReciprocalIter1(uVar4,uVar5);
    uVar4 = PackedFloatingReciprocalIter2(uVar4,uVar5);
    uVar4 = PackedFloatingMUL(uVar4,DAT_5042fb38);
    uVar3 = PackedFloatingMUL(uVar3,uVar4);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar2 = PackedFloatingSUB(uVar3,_DAT_5042fb28);
    uVar3 = PackedFloatingSUB(CONCAT44(uVar7,uVar7),uVar6);
    uVar4 = FloatingReciprocalAprox(in_MM6,uVar3);
    uVar3 = PackedFloatingReciprocalIter1(uVar3,uVar4);
    uVar3 = PackedFloatingReciprocalIter2(uVar3,uVar4);
    uVar6 = PackedFloatingSUB((ulonglong)*(uint *)(*(undefined8 **)(unaff_EBP + 0xc) + 1),uVar6);
    uVar6 = PackedFloatingMUL(uVar6,uVar3);
    *puVar1 = uVar2 ^ DAT_5042fb20;
    *(int *)(puVar1 + 1) = (int)uVar6;
    FastExitMediaState();
    puVar9 = *(undefined8 **)(unaff_EBP + 8);
  }
  FUN_504281b0(*(undefined8 **)(unaff_EBP + 8),puVar9,(undefined8 *)(unaff_EBP + -0x40));
  return *(undefined4 *)(unaff_EBP + 8);
}


