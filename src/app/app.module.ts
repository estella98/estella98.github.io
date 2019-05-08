import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { HeaderComponent } from './header/header.component';
import { BodyComponent } from './body/body.component';
import { HomeComponent } from './body/home/home.component';
import { ResumeComponent } from './body/resume/resume.component';
import { AboutComponent } from './body/about/about.component';
import { ProjectsComponent } from './body/projects/projects.component';
import { RouterModule, Routes} from '@angular/router';
import { FormsModule } from '@angular/forms';
import { FooterComponent } from './footer/footer.component';

const appRouter: Routes = [
  { path: '', component: HomeComponent},
  { path: 'about', component: AboutComponent},
  { path: 'resume', component: ResumeComponent},
  { path: 'projects', component: ProjectsComponent}
]



@NgModule({
  declarations: [
    AppComponent,
    HeaderComponent,
    BodyComponent,
    FooterComponent,
    HomeComponent,
    ResumeComponent,
    AboutComponent,
    ProjectsComponent
  ],
  imports: [
    BrowserModule,
    RouterModule.forRoot(appRouter),
    FormsModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
