/* ptr_0044f78d - 0x0044f78d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044f78d(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int unaff_EDI;
  int iStack_10;
  wchar_t *pwStack_c;
  int *piStack_8;
  
  do {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    while ((iVar2 = **(int **)(unaff_EBP + -0x34), iVar2 != 0 &&
           (*(uint *)(unaff_EBP + -0x28) < *(uint *)(iVar2 + -4)))) {
      *(uint *)(unaff_EBP + -0x3c) = iVar2 + *(uint *)(unaff_EBP + -0x28) * 4;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      while ((iVar2 = **(int **)(unaff_EBP + -0x3c), iVar2 != 0 &&
             (*(uint *)(unaff_EBP + -0x30) < *(uint *)(iVar2 + -4)))) {
        piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + iVar2);
        if (*piVar1 == 0) {
          if (piVar1[10] != -1) {
            if (piVar1[10] == *(int *)(unaff_EDI + 0x70)) {
              if (*(int *)(unaff_EBP + 8) == 0) {
                piStack_8 = (int *)0x44f895;
                FUN_00878dfb();
              }
              piStack_8 = (int *)0x1;
              iStack_10 = piVar1[9] + 0x1e + piVar1[7];
              iVar2 = piVar1[6];
              pwStack_c = (wchar_t *)(piVar1[8] + 8);
              *(int **)(unaff_EBP + -0x18) = *(int **)(unaff_EBP + 8);
              pwStack_c = (wchar_t *)
                          (**(code **)(**(int **)(unaff_EBP + 8) + 0x8c))
                                    (*(undefined4 *)(unaff_EBP + 8),
                                     iVar2 + 0x1b + *(int *)(unaff_EBP + -0x10));
              if ((int)pwStack_c < 0) {
                piStack_8 = *(int **)(unaff_EBP + -0x18);
                iStack_10 = 0x44f8dc;
                FUN_00878e09();
              }
            }
            piStack_8 = (int *)0xff;
            pwStack_c = L"䎋㬨灇䗆Ǽ融հ";
            FUN_004031b7();
            iVar5 = piVar1[10];
            iVar2 = *(int *)(unaff_EDI + 0x70);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            puVar3 = (undefined4 *)(unaff_EDI + 0x570);
            if (iVar5 != iVar2) {
              puVar3 = (undefined4 *)(unaff_EDI + 0x56c);
            }
            piVar6 = *(int **)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + -0x18) = *puVar3;
            if (piVar6 == (int *)0x0) {
              piStack_8 = (int *)0x44f91c;
              FUN_00878dfb();
              piVar6 = *(int **)(unaff_EBP + 8);
            }
            iVar2 = piVar1[7];
            iStack_10 = *(int *)(unaff_EBP + -0x9c);
            pwStack_c = *(wchar_t **)(unaff_EBP + -0x98);
            *(int *)(unaff_EBP + -0x38) = piVar1[6] + 0x1b + *(int *)(unaff_EBP + -0x10);
            iVar5 = *piVar6;
            piStack_8 = *(int **)(unaff_EBP + -0x94);
            *(int **)(unaff_EBP + -0x20) = piVar6;
            iVar2 = (**(code **)(iVar5 + 0x80))
                              (piVar6,*(undefined4 *)(unaff_EBP + -0x38),iVar2 + 0x20,
                               *(undefined4 *)(unaff_EBP + -0x18));
            if (iVar2 < 0) {
              piStack_8 = *(int **)(unaff_EBP + -0x20);
              iStack_10 = 0x44f966;
              pwStack_c = (wchar_t *)iVar2;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            piStack_8 = (int *)0x44f976;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_8 = (int *)0x44f981;
              FUN_00878dfb();
            }
            unaff_EDI = *(int *)(unaff_EBP + -0x1c);
          }
          piStack_8 = (int *)0x44f995;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_8 = (int *)0x44f9a2;
          FUN_00403191();
          piStack_8 = (int *)(unaff_EBP + -0x7c);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          pwStack_c = (wchar_t *)0x44f9b9;
          pwStack_c = (wchar_t *)FUN_00449749();
          iStack_10 = 0x44f9c2;
          uVar4 = FUN_00449713();
          *(int **)(unaff_EBP + -0x20) = &iStack_10;
          iStack_10 = extraout_ECX;
          FUN_00448a17(uVar4);
          iVar5 = piVar1[7] + 0x1e;
          iVar2 = piVar1[6] + 0x23 + *(int *)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_004115d9(iVar2,iVar5);
          FUN_00448e3a(iVar2,iVar5);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_8 = (int *)0x44fa00;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_8 = (int *)0x44fa0b;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_8 = (int *)0x44fa1b;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_8 = (int *)0x44fa2a;
            FUN_00878dfb();
          }
        }
        else if (*piVar1 == 1) {
          piStack_8 = (int *)0xff;
          pwStack_c = 
          L"甹謈ᑃ䗆׼䖉痨栊䀃耀\xece8䊕謀᱃䮋謘\xf055嶋茈წﲋ痿跨鑵ꖥ삃贞ᅌ謣倓冥ꕓ鋿\x80"
          ;
          FUN_004031b7();
          iVar2 = piVar1[5];
          *(undefined1 *)(unaff_EBP + -4) = 5;
          *(int *)(unaff_EBP + -0x18) = iVar2;
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_8 = (int *)0x44f80f;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + 8);
          iStack_10 = *(int *)(unaff_EBP + -0x6c);
          pwStack_c = *(wchar_t **)(unaff_EBP + -0x68);
          piStack_8 = *(int **)(unaff_EBP + -100);
          iVar2 = (**(code **)(*piVar6 + 0x80))
                            (piVar6,piVar1[6] + 0x23 + *(int *)(unaff_EBP + -0x10),piVar1[7] + 0x1e,
                             *(undefined4 *)(unaff_EBP + -0x18));
          if (iVar2 < 0) {
            iStack_10 = 0x44f84c;
            pwStack_c = (wchar_t *)iVar2;
            piStack_8 = piVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_8 = (int *)0x44f859;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_8 = (int *)0x44f864;
            FUN_00878dfb();
          }
          unaff_EDI = *(int *)(unaff_EBP + -0x1c);
        }
        *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3c;
      }
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    }
    iVar2 = *(int *)(unaff_EDI + 0x68) + *(int *)(unaff_EBP + -0x2c);
    if (iVar2 <= *(int *)(unaff_EDI + 0x6c)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      piStack_8 = (int *)(iVar2 + 1);
      iStack_10 = unaff_EBP + -0x14;
      pwStack_c = u__d__d_00964280;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0041354c();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      piStack_8 = (int *)0x44fa72;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00402676();
      piStack_8 = (int *)0x44fa8a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      piStack_8 = (int *)(unaff_EBP + -0x4c);
      pwStack_c = L"삅奙ٽ\xe850鍖B䖍傴䶍웜ﱅ\xe809ᮌ￼譑觌\xe065\xe850㣠\xfffb잁դ";
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_8 = (int *)0x44faa5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_8 = (int *)0x44fab5;
      pwStack_c = (wchar_t *)FUN_00411641();
      *(int ***)(unaff_EBP + -0x20) = &piStack_8;
      iStack_10 = 0x44fac1;
      FUN_004033a1();
      pwStack_c = (wchar_t *)0x1;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_10 = 0x44fad4;
      FUN_00450708();
      pwStack_c = (wchar_t *)0x44fadb;
      FUN_0044974c();
      pwStack_c = 
      L"䖉跠둅왐ﱅ\xe808パ\xfffb삅絙倆ﻨ䊒贀ꑅｐ跖ꑅ偓◨דּ藿姀絙倆\xe2e8䊒樀栃ÿ"
      ;
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_8 = (int *)0x44faf2;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_8 = (int *)0x44fafd;
        FUN_00878dfb();
      }
      piStack_8 = (int *)0x44fb03;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      piStack_8 = (int *)(unaff_EBP + -0x5c);
      pwStack_c = L"삅奙ٽ\xe850鋢Bͪｨ";
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_8 = (int *)0x44fb19;
        FUN_00878dfb();
      }
      piStack_8 = (int *)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      pwStack_c = L"䖍傤薍ｔ\xffff橐謀웏ﱅ\xe80cு";
      FUN_004031b7();
      piStack_8 = (int *)(unaff_EBP + -0xac);
      pwStack_c = (wchar_t *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_10 = 0x44fb47;
      FUN_00450708();
      pwStack_c = (wchar_t *)0x44fb4e;
      pwStack_c = (wchar_t *)FUN_00449749();
      iStack_10 = 0x44fb57;
      uVar4 = FUN_00411641();
      *(int **)(unaff_EBP + -0x38) = &iStack_10;
      iStack_10 = extraout_ECX_00;
      FUN_004033a1(uVar4);
      uVar4 = 0x125;
      iVar2 = (0xbe - *(int *)(unaff_EBP + -0x20)) / 2 + 0x23 + *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_004115d9(iVar2,0x125);
      FUN_00448e3a(iVar2,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_8 = (int *)0x44fba0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_8 = (int *)0x44fbab;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_8 = (int *)0x44fbb8;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_8 = (int *)0x44fbc3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      unaff_EDI = *(int *)(unaff_EBP + -0x1c);
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xdc;
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 0x1b8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_8 = (int *)0x44fbfe;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


