/* FUN_004bd6ba - 0x004bd6ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004bd6ba(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  FUN_00879bb8();
  piVar6 = *(int **)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if ((piVar6 == (int *)0x0) || (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_0097bcc0), iVar2 == 0))
  {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = piVar6 + -1;
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  if ((piVar1 != (int *)(-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + 1))) &&
     (piVar8 != (int *)0x0)) {
    uVar3 = FUN_004c12ae(piVar8,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14))
    ;
    goto LAB_004bdf34;
  }
  if ((piVar6 == (int *)0x0) || (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_009794f4), iVar2 == 0))
  {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = piVar6 + -1;
  }
  if ((piVar1 != (int *)(-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + 1))) &&
     (piVar8 != (int *)0x0)) {
    uVar3 = FUN_004c140c(piVar8,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14))
    ;
    goto LAB_004bdf34;
  }
  if ((piVar6 == (int *)0x0) || (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_009794f0), iVar2 == 0))
  {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = piVar6 + -1;
  }
  if ((piVar1 != (int *)(-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + 1))) &&
     (piVar8 != (int *)0x0)) {
    uVar3 = FUN_004c17f4(piVar8);
    goto LAB_004bdf34;
  }
  if ((piVar6 == (int *)0x0) || (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_009793c4), iVar2 == 0))
  {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = piVar6 + -1;
  }
  if ((piVar1 != (int *)(-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + 1))) &&
     (piVar8 != (int *)0x0)) {
    uVar3 = FUN_004c1949(piVar8);
    goto LAB_004bdf34;
  }
  if (*(int *)(extraout_ECX + 0x10) == 1) {
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd14), iVar2 == 0)
       ) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
    else {
      *(int **)(unaff_EBP + 8) = piVar1 + -1;
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      if ((piVar6 == (int *)0x0) ||
         (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_0097bd2c), iVar2 == 0)) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = piVar6 + -1;
      }
      if (piVar8 == (int *)0x0) goto LAB_004bd854;
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = *(undefined4 *)(unaff_EBP + 0x14);
      uVar9 = *(undefined4 *)(unaff_EBP + 0x10);
      uVar7 = *(undefined4 *)(unaff_EBP + 8);
LAB_004bd996:
      uVar3 = FUN_004bf107(uVar7,piVar8,uVar9,uVar3);
      goto LAB_004bdf34;
    }
LAB_004bd854:
    if ((piVar6 == (int *)0x0) || (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_0097bd14), iVar2 == 0)
       ) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
    else {
      *(int **)(unaff_EBP + 8) = piVar6 + -1;
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      if ((piVar1 == (int *)0x0) ||
         (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd2c), iVar2 == 0)) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = piVar1 + -1;
      }
      if (piVar8 != (int *)0x0) {
        puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
        uVar3 = *puVar4;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        uVar3 = FUN_004bf928(*(undefined4 *)(unaff_EBP + 8),piVar8,*(undefined4 *)(unaff_EBP + 0x10)
                             ,*(undefined4 *)(unaff_EBP + 0x14));
        goto LAB_004bdf34;
      }
    }
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd14), iVar2 == 0)
       ) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = piVar1 + -1;
    }
    if ((piVar8 == (int *)0x0) ||
       (piVar6 != (int *)(-(uint)(DAT_00978364 != 0) & DAT_00978364 + 4U))) {
      if ((piVar1 == (int *)0x0) ||
         (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd18), iVar2 == 0)) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
      }
      else {
        *(int **)(unaff_EBP + 8) = piVar1 + -1;
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        if ((piVar6 == (int *)0x0) ||
           (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_0097bd2c), iVar2 == 0)) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = piVar6 + -1;
        }
        if (piVar8 != (int *)0x0) {
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
          uVar3 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_007d3cdd(uVar3);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
          uVar3 = *(undefined4 *)(unaff_EBP + 0x14);
          uVar9 = *(undefined4 *)(unaff_EBP + 0x10);
          uVar7 = *(undefined4 *)(unaff_EBP + 8);
          goto LAB_004bd996;
        }
      }
      if ((piVar6 == (int *)0x0) ||
         (iVar2 = (**(code **)(*piVar6 + 0x48))(&DAT_0097bd18), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(unaff_EBP + 0xc) + -4;
      }
      if (iVar2 != 0) {
        if ((piVar1 == (int *)0x0) ||
           (iVar5 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd2c), iVar5 == 0)) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = piVar1 + -1;
        }
        if (piVar6 != (int *)0x0) {
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
          uVar3 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          FUN_007d3cdd(uVar3);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
          uVar3 = FUN_004bf9ee(iVar2,piVar6,*(undefined4 *)(unaff_EBP + 0x10),
                               *(undefined4 *)(unaff_EBP + 0x14));
          goto LAB_004bdf34;
        }
      }
      if ((piVar1 == (int *)0x0) ||
         (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd18), iVar2 == 0)) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = piVar1 + -1;
      }
      if ((piVar8 == (int *)0x0) ||
         (*(uint *)(unaff_EBP + 0xc) != (-(uint)(DAT_00978364 != 0) & DAT_00978364 + 4U)))
      goto LAB_004bda63;
    }
    piVar6 = (int *)0x0;
LAB_004bddf6:
    uVar3 = FUN_004c08a6(piVar8,piVar6);
    goto LAB_004bdf34;
  }
LAB_004bda63:
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x10);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar2 == 2) {
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd18), iVar2 == 0)
       ) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = piVar1 + -1;
    }
    if ((piVar6 != (int *)0x0) &&
       (*(uint *)(unaff_EBP + 0xc) == (-(uint)(DAT_00978364 != 0) & DAT_00978364 + 4U))) {
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) == -200) {
        FUN_006b18ed(0,0,0);
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) == -0xc9) {
        FUN_006b1dec(0,0,0);
      }
    }
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_009794f4), iVar2 == 0))
  {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar1 + -1;
  }
  if (piVar6 != (int *)0x0) {
    if ((*(int **)(unaff_EBP + 0xc) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x48))(&DAT_0097bd2c), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_EBP + 0xc) + -4;
    }
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = FUN_004c1a50(piVar6,iVar2,*(undefined4 *)(unaff_EBP + 0x10),
                           *(undefined4 *)(unaff_EBP + 0x14));
      goto LAB_004bdf34;
    }
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd2c), iVar2 == 0))
  {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar1 + -1;
  }
  if (piVar6 != (int *)0x0) {
    if ((*(int **)(unaff_EBP + 0xc) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x48))(&DAT_0097bd48), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_EBP + 0xc) + -4;
    }
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 5;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = FUN_004c1577(iVar2);
      goto LAB_004bdf34;
    }
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd2c), iVar2 == 0))
  {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar1 + -1;
  }
  if (piVar6 != (int *)0x0) {
    if ((*(int **)(unaff_EBP + 0xc) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x48))(&DAT_0097bd24), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_EBP + 0xc) + -4;
    }
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = FUN_004c168a(iVar2);
      goto LAB_004bdf34;
    }
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd2c), iVar2 == 0))
  {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar1 + -1;
  }
  piVar8 = *(int **)(unaff_EBP + 0xc);
  if (piVar6 != (int *)0x0) {
    if ((piVar8 == (int *)0x0) || (iVar2 = (**(code **)(*piVar8 + 0x48))(&DAT_0097bcf4), iVar2 == 0)
       ) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
    else {
      *(int **)(unaff_EBP + 8) = piVar8 + -1;
    }
    if ((*(int *)(unaff_EBP + 8) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) == 1)) {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 7;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = FUN_004c1760(*(undefined4 *)(unaff_EBP + 8));
      goto LAB_004bdf34;
    }
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd2c), iVar2 == 0))
  {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar1 + -1;
  }
  if (piVar6 != (int *)0x0) {
    if ((piVar8 == (int *)0x0) || (iVar2 = (**(code **)(*piVar8 + 0x48))(&DAT_0097bdd4), iVar2 == 0)
       ) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_EBP + 0xc) + -4;
    }
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      FUN_007d3cdd(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar3 = FUN_004c19ad(iVar2);
      goto LAB_004bdf34;
    }
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd2c), iVar2 == 0))
  {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar1 + -1;
  }
  iVar2 = 0;
  if (DAT_009791a0 != 0) {
    iVar2 = DAT_009791a0;
  }
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)(-(uint)(DAT_00978360 != 0) & DAT_00978360 + 4U);
    if (piVar6 == piVar1) {
      if (*(int **)(unaff_EBP + 0xc) == piVar6) {
LAB_004bded7:
        uVar3 = 1;
      }
      else {
        if ((iVar2 == 0) || (*(int *)(unaff_EBP + 0xc) != iVar2 + 4)) {
          if (*(uint *)(unaff_EBP + 0xc) == (-(uint)(DAT_00978364 != 0) & DAT_00978364 + 4U)) {
            uVar3 = 1;
LAB_004bdefa:
            uVar3 = FUN_004c1115(uVar3);
            goto LAB_004bdf34;
          }
          goto LAB_004bdf32;
        }
LAB_004bdeab:
        uVar3 = 0;
      }
LAB_004bded9:
      uVar3 = FUN_004c0dda(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),uVar3
                          );
    }
    else {
      if ((iVar2 == 0) || ((int *)(iVar2 + 4) != piVar1)) {
        puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x14,0x4d6);
        uVar3 = *puVar4;
        *(undefined4 *)(unaff_EBP + -4) = 10;
        FUN_007d3cdd(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
      }
      else {
        if (*(int **)(unaff_EBP + 0xc) == piVar1) goto LAB_004bdeab;
        if (*(int **)(unaff_EBP + 0xc) == piVar6) goto LAB_004bded7;
        if (*(uint *)(unaff_EBP + 0xc) == (-(uint)(DAT_00978364 != 0) & DAT_00978364 + 4U)) {
          uVar3 = 0;
          goto LAB_004bdefa;
        }
      }
LAB_004bdf32:
      uVar3 = 0;
    }
    goto LAB_004bdf34;
  }
  piVar8 = *(int **)(unaff_EBP + 0xc);
  if (piVar1 == piVar8) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x4d6);
    uVar3 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    FUN_007d3cdd(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar3 = FUN_004c07b9(piVar6,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14))
    ;
    goto LAB_004bdf34;
  }
  if (piVar8 == (int *)(-(uint)(DAT_00978364 != 0) & DAT_00978364 + 4U)) {
    piVar8 = (int *)0x0;
    goto LAB_004bddf6;
  }
  if (piVar8 == (int *)(-(uint)(DAT_00978360 != 0) & DAT_00978360 + 4U)) goto LAB_004bded7;
  if ((iVar2 != 0) && (piVar8 == (int *)(iVar2 + 4))) {
    uVar3 = 0;
    goto LAB_004bded9;
  }
  if ((DAT_0097919c == 0) || (piVar8 != (int *)(-(uint)(DAT_0097919c != 0) & DAT_0097919c + 4U))) {
    if ((DAT_00979198 != 0) && (piVar8 == (int *)(-(uint)(DAT_00979198 != 0) & DAT_00979198 + 4U)))
    {
      uVar3 = 1;
      goto LAB_004bde42;
    }
    if ((*(int *)(unaff_EBP + 8) == 0) || (piVar8 != (int *)(*(int *)(unaff_EBP + 8) + 4)))
    goto LAB_004bdf32;
    uVar3 = 0;
    uVar9 = 1;
  }
  else {
    uVar3 = 0;
LAB_004bde42:
    uVar9 = 0;
  }
  uVar3 = FUN_004c1abe(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),uVar9,
                       uVar3);
LAB_004bdf34:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


